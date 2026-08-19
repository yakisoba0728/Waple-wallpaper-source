// Function: FUN_1404ca2b0
// Addr: 1404ca2b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca2b0(char *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined2 uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  int in_EAX;
  uint uVar6;
  byte *pbVar7;
  int unaff_ESP;
  undefined4 unaff_00000024;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  
  uVar6 = in_EAX - unaff_ESP;
  bVar4 = (byte)uVar6 ^ *(byte *)(ulonglong)uVar6;
  uVar2 = (undefined2)(uVar6 >> 0x10);
  bVar4 = bVar4 ^ *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(bVar4,bVar4));
  *param_1 = *param_1 + unaff_R12B;
  pcVar3 = (char *)((ulonglong)CONCAT22(uVar2,CONCAT11(0xa1,bVar4)) * 2);
  *pcVar3 = *pcVar3 + bVar4;
  param_1[CONCAT44(unaff_00000024,unaff_ESP)] =
       param_1[CONCAT44(unaff_00000024,unaff_ESP)] + (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + -0x5f;
  *unaff_RDI = *unaff_RSI;
  pbVar1 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  uVar6 = uRam341c000a1c01004c;
  pbVar7 = (byte *)(ulonglong)uRam341c000a1c01004c;
  bVar4 = *pbVar7;
  bVar5 = (byte)uRam341c000a1c01004c;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(int *)(unaff_RSI +
          (ulonglong)
          (CONCAT31((int3)(uVar6 >> 8),(bVar5 + 0x8e) - CARRY1(bVar4,bVar5)) + 0x11e013f0 +
          (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar4,bVar5))) + 2) =
       *(int *)(unaff_RSI +
               (ulonglong)
               (CONCAT31((int3)(uVar6 >> 8),(bVar5 + 0x8e) - CARRY1(bVar4,bVar5)) + 0x11e013f0 +
               (uint)(bVar5 < 0x72 || (byte)(bVar5 + 0x8e) < CARRY1(bVar4,bVar5))) + 2) +
       (int)param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

