// Function: FUN_1404b9448
// Addr: 1404b9448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9448(char *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined7 uVar5;
  uint *puVar4;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 *puStackX_8;
  char *pcVar3;
  
  *(byte *)(unaff_RDI + unaff_RBP) =
       *(byte *)(unaff_RDI + unaff_RBP) | (byte)((ulonglong)param_2 >> 8);
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + (char)param_2;
  pcVar3 = (char *)CONCAT71(uVar5,cVar2);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = pcVar3 + -0x6d;
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_4 = *param_4;
  puVar4 = (uint *)CONCAT71(uVar5,cVar2 + *pcVar3);
  *puVar4 = *puVar4 | (uint)puVar4;
  func_0x000118969470();
  cVar2 = '\x18';
  do {
    puStackX_8 = puStackX_8 + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *puStackX_8;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

