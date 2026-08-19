// Function: FUN_1404ad3bc
// Addr: 1404ad3bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad3bc(int *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint *puVar7;
  int *piVar8;
  uint unaff_EBX;
  uint uVar9;
  char *unaff_RSI;
  byte *pbVar6;
  
  *param_1 = *param_1 + (int)param_2;
  uVar4 = in_EAX + 0x2c011100;
  pbVar6 = (byte *)(ulonglong)uVar4;
  cVar1 = *unaff_RSI;
  bVar3 = (byte)uVar4;
  *unaff_RSI = *unaff_RSI + bVar3;
  if (!SCARRY1(cVar1,bVar3)) {
    pbVar6[param_2 * 2] = pbVar6[param_2 * 2] ^ bVar3;
    *pbVar6 = *pbVar6 + bVar3;
  }
  uRam000000013467d3dc = uRam000000013467d3dc & unaff_EBX;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 - bVar3;
  uVar9 = ((int)&stack0x00000000 - (int)param_2) - (uint)(bVar2 < bVar3);
  uVar5 = CONCAT31((int3)(uVar4 >> 8),bVar3 - *pbVar6) + uVar9 + (uint)(bVar3 < *pbVar6);
  uVar5 = uVar5 - *(int *)(ulonglong)uVar5;
  puVar7 = (uint *)(ulonglong)uVar5;
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar5;
  uVar4 = *puVar7;
  *puVar7 = *puVar7 - uVar5;
  piVar8 = (int *)CONCAT71((uint7)(uint3)(uVar5 >> 8),0xb0);
  *piVar8 = *piVar8 + (int)piVar8 + (uint)(uVar4 < uVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

