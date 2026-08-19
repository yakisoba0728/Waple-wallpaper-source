// Function: FUN_1404a089c
// Addr: 1404a089c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a089c(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint *in_RAX;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  char unaff_SPL;
  longlong unaff_RSI;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *(char *)(unaff_RSI + 3) = *(char *)(unaff_RSI + 3) - CARRY1((byte)uVar3,(byte)in_RAX);
  bVar4 = in((short)param_2);
  *param_4 = *param_4 + bVar4;
  bVar4 = bVar4 | *param_2;
  pcVar5 = (char *)CONCAT71(0xf00003,bVar4);
  bVar1 = *param_2;
  *param_2 = *param_2 + (char)param_1;
  if (!SCARRY1(bVar1,(char)param_1)) {
    uVar2 = LocalDescriptorTableRegister();
    *(undefined4 *)((ulonglong)((int)pcVar5 + 0x34050002) - 0x3bfffca0) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT62(uVar8,CONCAT11(uVar7,6)) = *(char *)CONCAT62(uVar8,CONCAT11(uVar7,6)) + bVar4;
  *pcVar5 = *pcVar5 + bVar4;
  uVar6 = CONCAT71(0xf00003,bVar4) ^ 0xf;
  pcVar5 = (char *)(uVar6 - 0x3bfffca0);
  *pcVar5 = *pcVar5 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

