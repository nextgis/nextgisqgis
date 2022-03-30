
DROP TABLE IF EXISTS qgis_test.books_authors;
DROP TABLE IF EXISTS qgis_test.books;
DROP TABLE IF EXISTS qgis_test.authors;
DROP TABLE IF EXISTS qgis_test.editors;
DROP TABLE IF EXISTS qgis_test.pipes;
DROP TABLE IF EXISTS qgis_test.leaks;

-- Table: qgis_test.authors

CREATE TABLE qgis_test.authors
(
  pk serial NOT NULL,
  name text,
  CONSTRAINT authors_pkey PRIMARY KEY (pk),
  CONSTRAINT authors_name_key UNIQUE (name)
);

-- Table: qgis_test.editors

CREATE TABLE qgis_test.editors
(
  name text NOT NULL,
  year smallint NOT NULL,
  CONSTRAINT editors_pkey PRIMARY KEY (name, year)
);


-- Table: qgis_test.books

CREATE TABLE qgis_test.books
(
  pk serial NOT NULL,
  name character varying(255),
  fk_editor_name text NOT NULL,
  fk_editor_year integer NOT NULL,
  CONSTRAINT books_pkey PRIMARY KEY (pk),
  CONSTRAINT books_name_key UNIQUE (name),
  CONSTRAINT books_fk_editor_fkey FOREIGN KEY (fk_editor_name, fk_editor_year)
    REFERENCES qgis_test.editors (name, year) MATCH SIMPLE
    ON UPDATE NO ACTION ON DELETE CASCADE
);

-- Table: qgis_test.books_authors

CREATE TABLE qgis_test.books_authors
(
  fk_book integer NOT NULL,
  fk_author integer NOT NULL,
  CONSTRAINT books_authors_pkey PRIMARY KEY (fk_book, fk_author),
  CONSTRAINT books_authors_fk_author_fkey FOREIGN KEY (fk_author)
      REFERENCES qgis_test.authors (pk) MATCH SIMPLE
      ON UPDATE NO ACTION ON DELETE CASCADE,
  CONSTRAINT books_authors_fk_book_fkey FOREIGN KEY (fk_book)
      REFERENCES qgis_test.books (pk) MATCH SIMPLE
      ON UPDATE NO ACTION ON DELETE CASCADE
);

INSERT INTO qgis_test.authors(name)
        VALUES
              ('Erich Gamma'),
              ('Richard Helm'),
              ('Ralph Johnson'),
              ('John Vlissides'),
              ('Douglas Adams'),
              ('Ken Follett'),
              ('Gabriel García Márquez');

INSERT INTO qgis_test.editors(name, year)
       VALUES
	        ('Sputnik Editions', 1961),
			('Apollo Editions', 1969);


INSERT INTO qgis_test.books(name, fk_editor_name, fk_editor_year)
        VALUES
              ('Design Patterns. Elements of Reusable Object-Oriented Software',
              'Sputnik Editions',
              1961);

INSERT INTO qgis_test.books_authors(fk_book, fk_author)
        VALUES
              (1, 1),
              (1, 2),
              (1, 3),
              (1, 4);

-- Table: qgis_test.pipes

CREATE EXTENSION IF NOT EXISTS postgis;

CREATE TABLE qgis_test.pipes
(
  id serial PRIMARY KEY,
  name text,
  geom geometry('LINESTRING',4326),
  CONSTRAINT pipes_name_key UNIQUE (name)
);

INSERT INTO qgis_test.pipes(name, geom)
VALUES ('pipe 1', ST_GeometryFromText('LINESTRING(0 0,0 1)',4326)),
       ('pipe 2', ST_GeometryFromText('LINESTRING(0 0,1 0)',4326));

-- Table: qgis_test.leaks

CREATE TABLE qgis_test.leaks
(
  id serial PRIMARY KEY,
  name text,
  pipe integer references qgis_test.pipes(id),
  geom geometry('POINT',4326),
  CONSTRAINT leaks_name_key UNIQUE (name)
);

INSERT INTO qgis_test.leaks(name, pipe, geom)
VALUES ('leak 1', 1, ST_GeometryFromText('POINT(0 0.5)',4326)),
       ('leak 2', 2, ST_GeometryFromText('POINT(0.25 0)',4326)),
       ('leak 3', 2, ST_GeometryFromText('POINT(0.75 0)',4326));
