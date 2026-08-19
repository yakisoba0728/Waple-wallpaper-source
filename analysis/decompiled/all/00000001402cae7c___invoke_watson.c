// Function: _invoke_watson
// Addr: 1402cae7c
// Size: 71 bytes


/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  iVar3 = (*DAT_140426500)(0x17);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1402caeaa;
  FUN_1402cab90(2,0xc0000417);
  *(undefined8 *)(puVar4 + -8) = 0x1402caeb0;
  uVar2 = (*DAT_140426740)();
  (*DAT_140426220)(uVar2,0xc0000417);
  return;
}

