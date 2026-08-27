// Function: strncat
// Addr: 140421b40
// Size: 404 bytes


/* Library Function - Single Match
    strncat
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

char * __cdecl strncat(char *_Dest,char *_Source,size_t _Count)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  puVar6 = (ulonglong *)_Dest;
  if (_Count != 0) {
    for (; ((ulonglong)puVar6 & 7) != 0; puVar6 = (ulonglong *)((longlong)puVar6 + 1)) {
      puVar4 = puVar6;
      if ((char)*puVar6 == '\0') goto LAB_140421bd6;
    }
    do {
      do {
        puVar3 = puVar6;
        uVar1 = *puVar3;
        puVar6 = puVar3 + 1;
      } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0
              );
      puVar4 = puVar3;
    } while ((((((char)uVar1 != '\0') &&
               (puVar4 = (ulonglong *)((longlong)puVar3 + 1), (char)(uVar1 >> 8) != '\0')) &&
              (puVar4 = (ulonglong *)((longlong)puVar3 + 2), (char)(uVar1 >> 0x10) != '\0')) &&
             ((puVar4 = (ulonglong *)((longlong)puVar3 + 3), (char)(uVar1 >> 0x18) != '\0' &&
              (puVar4 = (ulonglong *)((longlong)puVar3 + 4), (char)(uVar1 >> 0x20) != '\0')))) &&
            ((puVar4 = (ulonglong *)((longlong)puVar3 + 5), (char)(uVar1 >> 0x28) != '\0' &&
             ((puVar4 = (ulonglong *)((longlong)puVar3 + 6), (char)(uVar1 >> 0x30) != '\0' &&
              (puVar4 = (ulonglong *)((longlong)puVar3 + 7), (char)(uVar1 >> 0x38) != '\0'))))));
LAB_140421bd6:
    lVar5 = (longlong)puVar4 - (longlong)_Source;
    do {
      if (((ulonglong)_Source & 7) == 0) goto LAB_140421c08;
      uVar1 = *(ulonglong *)_Source;
      *(char *)((longlong)_Source + lVar5) = (char)uVar1;
      if ((char)uVar1 == '\0') {
        return _Dest;
      }
      _Source = (char *)((longlong)_Source + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    *(char *)((longlong)_Source + lVar5) = '\0';
  }
  return _Dest;
  while( true ) {
    *(char *)((longlong)_Source + lVar5) = (char)uVar1;
    if ((char)uVar1 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 1);
    if (_Count == 1) break;
    cVar2 = (char)(uVar1 >> 8);
    *(char *)((longlong)_Source + 1 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 2);
    if (_Count == 2) break;
    cVar2 = (char)(uVar1 >> 0x10);
    *(char *)((longlong)_Source + 2 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 3);
    if (_Count == 3) break;
    cVar2 = (char)(uVar1 >> 0x18);
    *(char *)((longlong)_Source + 3 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 4);
    if (_Count == 4) break;
    cVar2 = (char)(uVar1 >> 0x20);
    *(char *)((longlong)_Source + 4 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 5);
    if (_Count == 5) break;
    cVar2 = (char)(uVar1 >> 0x28);
    *(char *)((longlong)_Source + 5 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 6);
    if (_Count == 6) break;
    cVar2 = (char)(uVar1 >> 0x30);
    *(char *)((longlong)_Source + 6 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    puVar6 = (ulonglong *)((longlong)_Source + 7);
    if (_Count == 7) break;
    cVar2 = (char)(uVar1 >> 0x38);
    *(char *)((longlong)_Source + 7 + lVar5) = cVar2;
    if (cVar2 == '\0') {
      return _Dest;
    }
    _Source = (char *)((longlong)_Source + 8);
    _Count = _Count - 8;
    puVar6 = (ulonglong *)_Source;
    if (_Count == 0) break;
LAB_140421c08:
    while( true ) {
      uVar1 = *(ulonglong *)_Source;
      if ((_Count < 8 || _Count - 8 == 0) ||
         (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
      break;
      *(ulonglong *)((longlong)_Source + lVar5) = uVar1;
      _Source = (char *)((longlong)_Source + 8);
      _Count = _Count - 8;
    }
    puVar6 = (ulonglong *)_Source;
    if (_Count == 0) break;
  }
  *(char *)((longlong)puVar6 + lVar5) = '\0';
  return _Dest;
}

