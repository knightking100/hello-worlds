# Define a configuration
Configuration HelloWorldConfig 
{
       Node localhost 
       {
              File TestFile {
                     Ensure = "Present"
                     DestinationPath = "c:\Hacktoberfest\HelloWorld.txt"
                     Contents = "Hello World!- Hacktoberfest"
              }
       }
}
# Apply configuration 
HelloWorldConfig 
Start-DscConfiguration -Wait -Verbose -Path .\HelloWorldConfig

