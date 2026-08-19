// Function: FUN_1404c6a14
// Addr: 1404c6a14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6a14(longlong param_1,longlong param_2)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar7;
  uint *puVar4;
  byte *pbVar8;
  char cVar9;
  longlong unaff_RBX;
  byte bVar6;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (byte)in_RAX;
  cVar5 = (char)((ulonglong)in_RAX >> 8) + cVar9;
  pbVar8 = (byte *)CONCAT62(uVar7,CONCAT11(cVar5,bVar3));
  *pbVar8 = *pbVar8 | bVar3;
  bVar6 = cVar5 + bVar3;
  puVar4 = (uint *)CONCAT62(uVar7,CONCAT11(bVar6,bVar3));
  *puVar4 = *puVar4 | (uint)puVar4;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar9;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + bVar6;
  pcVar2 = (char *)(param_2 * 2);
  *pcVar2 = *pcVar2 + (char)param_2;
  pbVar8 = (byte *)(param_1 + -1);
  if (pbVar8 == (byte *)0x0 || *pcVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar4 = (char)*puVar4 + bVar3;
  *puVar4 = *puVar4 + (uint)puVar4;
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar6;
  *(char *)((longlong)puVar4 * 2) = *(char *)((longlong)puVar4 * 2) + bVar3 + CARRY1(bVar1,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

