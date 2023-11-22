import os
import subprocess

# Get the current directory
current_dir = os.getcwd()

# Get a list of all files in the directory
files = os.listdir(current_dir)

# Filter the files to only include those starting with "test_"
test_files = [file for file in files if file.startswith("test_")]

test_errors = [
    "test_core_sqliteexpressioncompiler",
    "test_core_pointcloudlayerexporter",
    "test_core_overlayexpression",
    "test_app_maptoolselect",
    "test_core_settingsentry",
    "test_core_authconfig",
    "test_qgsserver_wms_dxf.py"
]

# Remove the excluded test files from the list
test_files = [file for file in test_files if file not in test_errors]

'''
current = 1
for file in test_files:
    print(f'{current}/{len(test_files)} Test  #{current} {current_dir}/{file}')
    
    command = f'{current_dir}/{file}'
    
    output = subprocess.check_output(command, cwd=current_dir)
    
    print(output.decode())
    
    current += 1
'''
'''
current = 1
print('RUN ERRORS LIST...')

for file in test_errors:
    print(f'{current}/{len(test_errors)} Test  #{current} {current_dir}/{file}')
    
    command = f'{current_dir}/{file}'
    
    result = subprocess.run(command, shell=True, cwd=current_dir, capture_output=True)
    
    print(result.stdout.decode())
    if result.stderr:
        print(result.stderr.decode())

    
    current += 1
'''

current = 1
for file in test_files:
    print(f'{current}/{len(test_files)} Test  #{current} {current_dir}/{file}')
    
    command = f'python3 {file}'
    
    output = subprocess.check_output(command, shell=True, cwd=current_dir, text=True)
    
    print(output)
    current += 1
    
'''    
current = 1
print('RUN ERRORS LIST...')

for file in test_errors:
    print(f'{current}/{len(test_errors)} Test  #{current} {current_dir}/{file}')
   
    command = f'python3 {current_dir}/{file}'
    
    result = subprocess.run(command, shell=True, cwd=current_dir, capture_output=True)
    
    output = subprocess.check_output(command, cwd=current_dir)
    print(output.decode())
    
    #result = subprocess.run(command, shell=True, cwd=current_dir, capture_output=True)
    print(result.stdout.decode())
    if result.stderr:
        print(result.stderr.decode())
    
    current += 1
'''
