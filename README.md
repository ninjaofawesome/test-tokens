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
