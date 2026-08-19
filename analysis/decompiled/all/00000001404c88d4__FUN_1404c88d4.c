// Function: FUN_1404c88d4
// Addr: 1404c88d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c88d4(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  char cVar9;
  undefined8 in_RAX;
  byte *pbVar11;
  byte unaff_BL;
  uint *puVar7;
  char *pcVar8;
  undefined7 uVar10;
  
  cVar9 = (char)((ulonglong)in_RAX >> 8);
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = (char)in_RAX + cVar9;
  puVar7 = (uint *)CONCAT71(uVar10,cVar5);
  LOCK();
  puVar1 = (undefined4 *)((longlong)puVar7 * 2 + 0x21);
  uVar3 = *puVar1;
  *puVar1 = (int)param_1;
  UNLOCK();
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  *(char *)((longlong)puVar7 + 0x39) = *(char *)((longlong)puVar7 + 0x39) + (char)((uint)uVar3 >> 8)
  ;
  *puVar7 = *puVar7 ^ (uint)puVar7;
  cVar5 = cVar5 + cVar9;
  puVar7 = (uint *)CONCAT71(uVar10,cVar5);
  LOCK();
  puVar1 = (undefined4 *)((longlong)puVar7 * 2 + 0x21);
  uVar4 = *puVar1;
  *puVar1 = uVar3;
  pbVar11 = (byte *)CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar4);
  UNLOCK();
  *(char *)puVar7 = (char)*puVar7 + cVar5;
  *(char *)puVar7 = (char)*puVar7 + cVar9;
  *(char *)((longlong)puVar7 + 0x39) = *(char *)((longlong)puVar7 + 0x39) + (char)((uint)uVar4 >> 8)
  ;
  *puVar7 = *puVar7 ^ (uint)puVar7;
  bVar6 = cVar5 + 0x2b;
  bVar2 = *pbVar11;
  *pbVar11 = *pbVar11 + unaff_BL;
  pcVar8 = (char *)(CONCAT71(uVar10,bVar6) * 2);
  *pcVar8 = (*pcVar8 - bVar6) - CARRY1(bVar2,unaff_BL);
  puVar7 = (uint *)(param_2 + 5);
  *puVar7 = *puVar7 | (uint)param_2;
  pbVar11 = pbVar11 + -1;
  if (pbVar11 == (byte *)0x0 || *puVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = bVar6 & (byte)param_2;
  pcVar8 = (char *)CONCAT71(uVar10,bVar6);
  *pcVar8 = *pcVar8 + (char)((ulonglong)pbVar11 >> 8);
  *pcVar8 = *pcVar8 + bVar6;
  *pbVar11 = *pbVar11 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

