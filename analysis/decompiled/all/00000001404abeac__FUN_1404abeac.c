// Function: FUN_1404abeac
// Addr: 1404abeac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abeac(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_8;
  
  bVar7 = (char)param_2 + 'J' +
          (0x42 < bRam000000004200957a || CARRY1(bRam000000004200957a + 0xbd,in_CF));
  bVar4 = *unaff_RSI;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar7;
  uStack_8 = (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar2,bVar7) * 0x800 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
             (ulonglong)((char)*unaff_RSI < '\0') * 0x80 | (ulonglong)(*unaff_RSI == 0) * 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*unaff_RSI) & 1U) == 0) * 4 |
             (ulonglong)CARRY1(bVar4,bVar7) | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
  verr();
  uVar3 = TaskRegister();
  pcVar5 = (char *)((ulonglong)
                    CONCAT11((byte)(uVar3 >> 8) | (byte)((ulonglong)param_2 >> 8),
                             (char)uVar3 + *(char *)(ulonglong)uVar3) & 0xffffffffffffff9c);
  TaskRegister(uRamffffffffe8210fe6);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  TaskRegister(uRamffffffffe0210fe6);
  bVar4 = (byte)((ulonglong)pcVar5 >> 8);
  pcVar1 = (char *)((longlong)&uStack_8 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar1 = *pcVar1 + (char)(CONCAT11(bVar4 + bVar7,(char)pcVar5 + *pcVar5) + 0xf9c1600 +
                             (uint)CARRY1(bVar4,bVar7) >> 8);
  uVar3 = TaskRegister();
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = *pcVar5 + (char)uVar3;
  pcVar1 = (char *)(unaff_RDI + 0xf9c1600 + param_1);
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar5[0x21004abd] = pcVar5[0x21004abd] + unaff_BH;
  pbVar6 = (byte *)(ulonglong)(uVar3 + 0x74050002);
  bVar4 = (byte)(uVar3 + 0x74050002);
  *pbVar6 = *pbVar6 | bVar4;
  pbVar6[-0x5f58fff1] = pbVar6[-0x5f58fff1] & 0xf;
  pbVar6[0x210049ec] = pbVar6[0x210049ec] + unaff_BH;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar6[-0x58fff060] = pbVar6[-0x58fff060] + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

