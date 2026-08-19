// Function: FUN_1404b5bf8
// Addr: 1404b5bf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5c1d) overlaps instruction at (ram,0x0001404b5c1c)
    */

void FUN_1404b5bf8(char *param_1,byte *param_2,byte param_3,char *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  uint *in_RAX;
  char *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_retaddr;
  byte *pbVar3;
  
  *in_RAX = *in_RAX & (uint)param_1;
  bVar2 = (char)in_RAX + (char)*in_RAX;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  pbVar3[0x22] = pbVar3[0x22] | (byte)((ulonglong)param_1 >> 8);
  *unaff_RBX = *unaff_RBX + (char)unaff_RBX;
  if (param_1 == (char *)0x0) {
    *param_4 = *param_4 + '\b';
  }
  else {
    *(char *)(unaff_RDI + 0x14001ae4) = *(char *)(unaff_RDI + 0x14001ae4) + (char)param_2;
    *param_4 = *param_4 + '\b';
    *param_2 = *param_2 | bVar2;
    *pbVar3 = *pbVar3 + (char)param_1;
    if ((char)*pbVar3 < '\0') {
      puVar1 = (undefined1 *)
               (CONCAT62((int6)((ulonglong)unaff_retaddr >> 0x10),(ushort)(byte)unaff_retaddr) * 3);
      *puVar1 = *puVar1;
      *param_4 = *param_4 + '\b';
      *pbVar3 = *pbVar3 | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RDI + 0x7e001ae4) = *(char *)(unaff_RDI + 0x7e001ae4) + (char)param_2;
    out((short)param_2,(int)pbVar3);
    *(char *)(unaff_retaddr + 0x4b) = *(char *)(unaff_retaddr + 0x4b) - (byte)unaff_retaddr;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

