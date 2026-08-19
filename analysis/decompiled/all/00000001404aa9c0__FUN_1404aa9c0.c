// Function: FUN_1404aa9c0
// Addr: 1404aa9c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa9c0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  undefined8 in_RAX;
  uint *puVar4;
  byte *pbVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(undefined1 *)(unaff_RBX + 0xe) = 0;
  *unaff_RDI = *unaff_RSI;
  pbVar6 = (byte *)(ulonglong)(uint)unaff_RSI[1];
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + bVar5;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar5;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX + '\x06' + CARRY1(bVar2,bVar5));
  (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 2] =
       (&stack0x00000000)[(longlong)(unaff_RSI + 1) * 2] + (char)param_2;
  uVar3 = (uint)puVar4 | *puVar4;
  pbVar6[0x8e40400] = pbVar6[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((ulonglong)uVar3 + 0x66);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

