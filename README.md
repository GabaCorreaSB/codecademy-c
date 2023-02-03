## Codecademy Projects 

# Usage

    To run the desired project just run the command:

        $ make start_projects PROJECT={project_name}
    
    Example (text_adventure):

        $ make start_projects PROJECT=text_adventure

    To clean the projects you build just run the commands for each condition:

        If you have multiples projects just run:
            
            $ make clean_project

        If you need one specific project to be clean just run:

            $ make clean_project POD={project_name} (follow the example above on the pod name)
