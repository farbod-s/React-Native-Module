[Getting Started](https://facebook.github.io/react-native/docs/getting-started)
---
```
brew install node
brew install watchman
sudo gem install cocoapods
```
create new project:
```
npx react-native init AwesomeProject
```
run Android:
```
npx react-native run-android
```
run iOS:
```
npx react-native run-ios
```

install module from local directory:
```
npm install ../react-native-chabok --save
```
install module from github branch:
```
npm install git://github.com/chabok-io/chabok-client-rn.git#v2.0.0 --save
```
link and unlink module:
```
react-native link react-native-chabok
npm link ../react-native-chabok
npm unlink --no-save ../react-native-chabok
```

[Native Modules Setup](https://github.com/brodybits/create-react-native-module)
---
Requirements: Node 8.0+
Packages required to be installed globally if the recommended example app is generated:
react-native-cli
yarn
```
npm install -g react-native-cli yarn
```
To install this package:
```
npm install -g create-react-native-module
```
Navigate into an empty directory to execute the command.
Create empty React-Native module:
```
create-react-native-module MyFancyLibrary
```
This will create the folder MyFancyLibrary in which the library will be created in.
Now install dependencies by running this command in the newly created library.
```
npm install
```
add your newly created module as a dependency in your package.json
run npm install to bring it along from your local npm repository.

[Native Modules (Android)](https://facebook.github.io/react-native/docs/native-modules-android)
---
native android modules

[Native Modules (iOS)](https://facebook.github.io/react-native/docs/native-modules-ios)
---
native ios modules

NPM
---
```
npm config set registry https://registry.npmjs.org/
npm adduser
npm publish
```
```
npm unpublish react-native-chabok
```
