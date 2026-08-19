// Function: FUN_1404cf268
// Addr: 1404cf268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf274) overlaps instruction at (ram,0x0001404cf273)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cf273) */

void FUN_1404cf268(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char *in_RAX;
  char cVar3;
  ulonglong uVar4;
  int unaff_EBP;
  uint unaff_ESI;
  uint uVar5;
  undefined1 *unaff_RDI;
  
  uVar5 = unaff_ESI | *(uint *)(param_2 + 7);
  if (param_1 == 1 || uVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  uVar4 = (ulonglong)(uint)((int)&stack0x00000000 + unaff_EBP);
  do {
    in(CONCAT11(cVar3,(char)param_2));
    *(undefined1 *)(ulonglong)uVar5 = 3;
    puVar1 = (undefined1 *)((longlong)unaff_RDI * 2 + 0x1115a000a);
    *puVar1 = *puVar1;
    bRam00000000a8cf0003 = bRam00000000a8cf0003 | 3;
  } while ((char)bRam00000000a8cf0003 < '\0');
  if (bRam00000000a8cf0003 == 0xfd) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(CONCAT11(cVar3,(char)param_2));
  *unaff_RDI = uVar2;
  *(ulonglong *)(uVar4 - 8) = uVar4;
  cRam00000001464d08aa = cRam00000001464d08aa + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

