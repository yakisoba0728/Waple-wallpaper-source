// Function: FUN_1404b6f34
// Addr: 1404b6f34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6f34(char *param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  byte bVar4;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool bVar5;
  char *pcVar3;
  
  unaff_RSI[0x4b] = unaff_RSI[0x4b] ^ (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)in_EAX;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(param_4 + -0x68) = uVar1;
  bVar5 = CARRY1(*unaff_RSI,unaff_BL);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  bVar4 = (byte)param_2;
  if (-1 < (char)*unaff_RSI) {
    bVar5 = CARRY1(*unaff_RDI,bVar4);
    *unaff_RDI = *unaff_RDI + bVar4;
  }
  uVar2 = in_EAX + 0x1abc4600 + (uint)bVar5;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar4;
  *param_2 = *param_2 + (int)param_2;
  pcVar3[(longlong)unaff_RSI * 2] = pcVar3[(longlong)unaff_RSI * 2] + (char)param_1;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *param_2 = *param_2 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

