// Function: FUN_1404bb9ac
// Addr: 1404bb9ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb9ac(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  byte *pbVar5;
  char unaff_SPL;
  uint *unaff_RDI;
  undefined2 in_SS;
  char in_ZF;
  char *pcVar4;
  
  pbVar5 = (byte *)(param_1 + -1);
  if (pbVar5 != (byte *)0x0 && in_ZF == '\0') {
    *pbVar5 = *pbVar5 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar2;
  *(char *)(in_RAX + -0x1b) = (char)in_RAX[-0x1b] + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(undefined2 *)(param_1 + 0x49eddfff) = in_SS;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  uVar3 = ((uint)in_RAX - iRam00000001524cd4c7) - (uint)CARRY1(bVar1,bVar2);
  pcVar4 = (char *)(ulonglong)uVar3;
  *pcVar4 = *pcVar4 + (char)param_2;
  if (pbVar5 == (byte *)0x1 || *pcVar4 == '\0') {
    pbVar5 = (byte *)(pcVar4 + param_2 * 2);
    *pbVar5 = *pbVar5 >> 1 | *pbVar5 << 7;
    *pcVar4 = *pcVar4 + (char)uVar3;
    *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

