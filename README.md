# Style Dictionary Example - BASIC

## What is this?

An example of a ASD package including Android, iOS, Compose, JS, JSON, CSS, and SCSS output.  It was built purely to show how to build a basic package and fiddle around with configuration and tokens for future reference.

## How do I use this?

For reference mostly.  It was built to try out ASD and as something to come back to when I have forgotten how to do something.

For specific topics, see below.

## How to add build types

Out of the box, if running `npm run style-dictionary build` or `npx style-dictionary build` the end result will be for Android, iOS, Compose, and CSS.  For other formats the following objects need to be added to the `config.platforms` object:

Note that the object is called `web-[format type]` in the following examples.  The build will just output as `scss` or `js`.

**SCSS**

```bash
    "web-scss": {
      "transformGroup": "scss",
      "buildPath": "build/scss/",
      "files": [
        {
          "destination": "_variables.scss",
          "format": "scss/variables"
        }
      ]
    },
```

**JS**

```bash
    "web-js": {
      "transformGroup": "js",
      "buildPath": "build/js/",
      "files": [
        {
          "destination": "tokens.js",
          "format": "javascript/module"
        }
      ]
    },
```

**JSON**

```bash
    "json": {
      "transformGroup": "js",
      "buildPath": "build/json/",
      "files": [
        {
          "destination": "tokens.json",
          "format": "json"
        }
      ]
    },
```

Also to note, this builds EVERYTHING as is to a tokens file, no destinations by section, filters, etc.  See the [docs](https://styledictionary.com/getting-started/installation/) for more specific topics.

## How to create tokens

If thinking of tokens, using atomic principles help here.  

For atoms examples check out `colors.json` and `dimensions.json`. They're pretty simple objects that are constructed as such:

```
{
    "nameOfPropertyPlural" : {
        "$type": "nameOfPropertySingular",
        "keyName": {
            "value": [some primitive value type]
        }
    }
}
```

Next come molecules. `text.json` has some good examples here, where logical groupings are made for fonts, sizes, weights, lineheights, and composed typography styles.

Note here, as opposed to the atomic example above, that the name of the object and the `$type` in the object don't have to be plural and singular.  The `$type` describes what the nested value is.  So, if tha name of the key is `"text"`(1) and the first level below that is `"fonts"`(2), and the first nested value is `$type` is `"fontFamily"` (0) and then sibling selectors like `"serif"` or `"sans"` (3), to call the sans-serif font like so:

```
"fontFamily": "{text.fonts.sans}"
```
or
```
"0": "{1.2.3}"
```
