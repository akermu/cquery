static int a;

void foo() {
  a = 3;
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": 4259594751088586730,
      "short_name": "foo",
      "detailed_name": "void foo()",
      "kind": 12,
      "declarations": [],
      "definition_spelling": "3:6-3:9",
      "definition_extent": "3:1-5:2",
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": []
    }],
  "vars": [{
      "id": 0,
      "usr": 11823161916242867318,
      "short_name": "a",
      "detailed_name": "int a",
      "definition_spelling": "1:12-1:13",
      "definition_extent": "1:1-1:13",
      "kind": 13,
      "uses": ["1:12-1:13", "4:3-4:4"]
    }]
}
*/
