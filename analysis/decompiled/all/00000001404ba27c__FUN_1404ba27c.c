// Function: FUN_1404ba27c
// Addr: 1404ba27c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba27c(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *in_RAX;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  char unaff_BH;
  char *unaff_RSI;
  char *unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_1 >> 8);
  in_RAX[-0x5f] = in_RAX[-0x5f] + cVar5;
  *param_4 = *param_4 + -8;
  bVar1 = (byte)in_RAX;
  *unaff_RSI = *unaff_RSI + bVar1;
  *in_RAX = *in_RAX + bVar1;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar1 | *in_RAX) + cVar5);
  uVar2 = (uint)puVar3 | *puVar3;
  bVar1 = (byte)uVar2;
  param_2 = (char)(uVar2 >> 8) + param_2;
  pbVar4 = (byte *)(ulonglong)CONCAT22((short)(uVar2 >> 0x10),CONCAT11(param_2,bVar1));
  *pbVar4 = *pbVar4 ^ bVar1;
  if (-1 < (char)*pbVar4) {
    *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001429ba6ad = cRam00000001429ba6ad + bVar1;
  *pbVar4 = *pbVar4 ^ bVar1;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

