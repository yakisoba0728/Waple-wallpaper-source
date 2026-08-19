// Function: FUN_1404d4f68
// Addr: 1404d4f68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4f68(longlong param_1,byte param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar4;
  byte unaff_BL;
  char cVar5;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  bool bVar6;
  undefined8 in_MM0;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  uVar3 = in_EAX + 0xd0000954;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH +
       (0x2ffff6ab < in_EAX);
  cVar5 = unaff_BL + bVar2;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) + unaff_BH +
       CARRY1(unaff_BL,bVar2);
  *(char *)((ulonglong)uVar3 + 0x74) = *(char *)((ulonglong)uVar3 + 0x74) + (char)uVar3;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (char)uVar3 + '\b' + CARRY1(bVar2,unaff_SPL);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_2;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  pmulhuw(in_MM0,uRam000000014ac15987);
  bVar6 = CARRY1(bRam000000012b4d57c1,bVar2);
  bRam000000012b4d57c1 = bRam000000012b4d57c1 + bVar2;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) + unaff_BH + bVar6;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar5)) + unaff_BH +
       CARRY1(param_2,unaff_BH);
  pcVar1 = (char *)(unaff_RSI + 0x21004d + param_1 * 2);
  *pcVar1 = *pcVar1 + param_2 + unaff_BH;
  *pcVar4 = *pcVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

