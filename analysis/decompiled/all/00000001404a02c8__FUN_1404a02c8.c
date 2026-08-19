// Function: FUN_1404a02c8
// Addr: 1404a02c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0330) */

void FUN_1404a02c8(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 in_RAX;
  int *piVar3;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '&' + in_CF);
  uVar1 = (int)piVar3 + *piVar3;
  *param_1 = *param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  uVar1 = (uVar1 & 0x26140003) + *(int *)(ulonglong)(uVar1 & 0x26140003);
  *param_1 = *param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RDI = *unaff_RSI;
  iVar2 = func_0x00014a4b033b();
  uVar1 = iVar2 + 0x6420a00;
  if ((param_1 == (undefined1 *)0x1 || uVar1 == 0) && (!SCARRY4(iVar2,0x6420a00))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  uRam00000001744f0308 = uRam00000001744f0308 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

