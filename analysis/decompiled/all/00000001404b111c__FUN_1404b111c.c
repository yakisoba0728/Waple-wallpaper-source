// Function: FUN_1404b111c
// Addr: 1404b111c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b111c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_RAX;
  byte bVar6;
  char unaff_SPL;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),*unaff_RSI) + 0x15aceb00 + (uint)in_CF;
  pcVar1 = (char *)((ulonglong)uVar4 + 2);
  *pcVar1 = *pcVar1 + bVar6;
  *param_1 = *param_1 + unaff_SPL;
  pbVar2 = (byte *)(unaff_RDI + -0x5065ffeb);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar6;
  iVar5 = uVar4 + 0xaf018002 + (uint)CARRY1(bVar3,bVar6);
  *param_1 = *param_1 + (char)((uint)iVar5 >> 8);
  pcVar1 = (char *)(unaff_RDI + 0x10580015 + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + ((byte)((uint)(iVar5 + -0x3bfafffe) >> 8) | 0x9a);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

