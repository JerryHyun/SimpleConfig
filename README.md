# SimpleConfig
This plugin makes it easy to use Unreal Engine's save config in Blueprints. 
You can control save config, load config, setting config variables in Blueprint.

# How to use
1. On Contents Browser -> Right Click -> Create Basic Asset -> Blueprint Class -> SimpleConfigActor -> Select -> Chage name ->'BP_SimpleConfig'
![cap01](https://user-images.githubusercontent.com/18024755/124413587-ec533200-dd8b-11eb-82db-6e0e06832c5a.png)

2. Open 'BP_SimpleConfig'

3. Add Variable
![cap03](https://user-images.githubusercontent.com/18024755/124413591-efe6b900-dd8b-11eb-8c60-e9514be73091.png)

4. Click 'Compile' button 

5. Click Variable -> Check 'Config Variable' on 'Details' -> Click 'Compile' button & Save
![cap05](https://user-images.githubusercontent.com/18024755/124413594-f117e600-dd8b-11eb-8d87-9011cf8f0963.png)

6. 'BP_SimpleConfig' drag & drop into the level
![cap06](https://user-images.githubusercontent.com/18024755/124413598-f2e1a980-dd8b-11eb-8721-4985c2eb1cd5.png)

7. You can Save & Load
![cap07](https://user-images.githubusercontent.com/18024755/124413600-f412d680-dd8b-11eb-880c-898128e4281a.png)

If you are using windows & UE4 editor, you can find config file this path 
	-> [Project Folder Path]\Saved\Config\Windows\SimpleConfig.ini

If you are using packaging game in windows, you can find config file this path 
	-> [Game Folder Path]\\[Game Project Name]\Saved\Config\WindowsNoEditor\SimpleConfig.ini
