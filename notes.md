[Getting Started](https://facebook.github.io/react-native/docs/getting-started)
---
```
brew install node
brew install watchman
sudo gem install cocoapods
```
```
npx react-native init AwesomeProject
npx react-native run-ios //is one way to run your app. You can also run it directly from within Xcode.
```
```
npm install ../react-native-chabok --save
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
