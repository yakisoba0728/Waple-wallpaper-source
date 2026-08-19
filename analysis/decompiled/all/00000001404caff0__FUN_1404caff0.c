// Function: FUN_1404caff0
// Addr: 1404caff0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caff0(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  undefined8 in_RAX;
  int *piVar4;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  char *pcVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)param_2;
  bVar2 = (byte)in_RAX + 1;
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + in_CF);
  *piVar4 = *piVar4 + (uint)piVar4 + (uint)(0xfe < (byte)in_RAX || CARRY1(bVar2,in_CF));
  uVar3 = (uint)piVar4 | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar6 = *(char *)(ulonglong)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 & bVar7;
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  *pcVar5 = *pcVar5 + unaff_BH;
  *pcVar5 = *pcVar5 + bVar2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (uint)param_1;
  LOCK();
  uRam000000011459b01e = uRam000000011459b01e & (uint)param_1;
  UNLOCK();
  uVar3 = CONCAT31(uVar1,bVar2 + *pcVar5 + *(char *)(ulonglong)CONCAT31(uVar1,bVar2 + *pcVar5)) +
          0xd0000654;
  *param_1 = *param_1 + unaff_R12B;
  piVar4 = (int *)((ulonglong)uVar3 ^ 10);
  *piVar4 = *piVar4 + (int)piVar4;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)piVar4 & (byte)(uVar3 >> 8));
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3 | 0x5000564;
  cVar8 = (char)((ulonglong)param_2 >> 8) + cVar6 + unaff_BL * '\x02';
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 ^ 7 | *(byte *)(unaff_RBP + 0x33);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  unaff_RDI[unaff_RBP * 4 + 0x4c] = unaff_RDI[unaff_RBP * 4 + 0x4c] + bVar2;
  cVar6 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar6;
  *pcVar5 = *pcVar5 + bVar2;
  bVar2 = bVar2 | *(byte *)(unaff_RBP + 0x33);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  unaff_RDI[unaff_RBP * 4 + 0x4c] = unaff_RDI[unaff_RBP * 4 + 0x4c] + bVar2;
  *param_1 = *param_1 + cVar6;
  *pcVar5 = *pcVar5 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

