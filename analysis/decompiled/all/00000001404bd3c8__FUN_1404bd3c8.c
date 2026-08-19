// Function: FUN_1404bd3c8
// Addr: 1404bd3c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd3c8(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *in_RAX;
  uint *puVar2;
  char *pcVar3;
  byte bVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined8 uStack_10;
  char cVar4;
  undefined6 uVar5;
  
  in_RAX[7] = in_RAX[7] | unaff_BH;
  bVar1 = (byte)in_RAX;
  in_RAX[(longlong)unaff_RBP * 2] = in_RAX[(longlong)unaff_RBP * 2] + bVar1;
  *in_RAX = *in_RAX | bVar1;
  uRam00000001656d7ed7 = uRam00000001656d7ed7 & (uint)&stack0x00000000;
  uVar5 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar4 = (char)((ulonglong)in_RAX >> 8) + bVar1;
  puVar2 = (uint *)CONCAT62(uVar5,CONCAT11(cVar4,bVar1));
  bVar6 = (byte)param_1;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> (bVar6 & 7) |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 8 - (bVar6 & 7);
  *puVar2 = *puVar2 & (uint)puVar2;
  *(byte *)puVar2 = (char)*puVar2 + bVar1;
  uRam00000001656d7ee7 = uRam00000001656d7ee7 & (uint)&stack0x00000000;
  pcVar3 = (char *)CONCAT62(uVar5,CONCAT11(cVar4 + bVar1,bVar1));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> (bVar6 & 7) |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 8 - (bVar6 & 7);
  *(int *)(unaff_RSI + 0xd) = *(int *)(unaff_RSI + 0xd) + (int)param_1;
  *(char *)(unaff_RSI + -0x18) = *(char *)(unaff_RSI + -0x18) + bVar6;
  *pcVar3 = *pcVar3 + bVar1;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BH;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar4 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  pcVar3 = (char *)CONCAT71(0x340f00,CARRY1(bVar1,unaff_BH) + '\x03');
  GlobalDescriptorTableRegister(*param_2);
  *pcVar3 = *pcVar3 + bVar6;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

