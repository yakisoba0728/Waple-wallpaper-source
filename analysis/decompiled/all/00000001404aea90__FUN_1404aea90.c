// Function: FUN_1404aea90
// Addr: 1404aea90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aea90(longlong param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined6 uVar6;
  uint *puVar4;
  char cVar7;
  longlong unaff_RBX;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  byte *pbVar3;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar2 = (byte)in_RAX;
  cVar5 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  pbVar3 = (byte *)CONCAT62(uVar6,CONCAT11(cVar5,bVar2));
  *pbVar3 = *pbVar3 | bVar2;
  cVar5 = cVar5 + bVar2;
  puVar4 = (uint *)CONCAT62(uVar6,CONCAT11(cVar5,bVar2));
  *puVar4 = *puVar4 | (uint)puVar4;
  param_2[param_1] = param_2[param_1] + cVar7;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar5;
  *(char *)((longlong)puVar4 + (longlong)param_2) =
       *(char *)((longlong)puVar4 + (longlong)param_2) + cVar7;
  *(char *)(puVar4 + 0x1b) = (char)puVar4[0x1b] + (char)param_2;
  puVar4 = (uint *)(param_2 + unaff_RBX);
  uVar1 = *puVar4;
  *puVar4 = *puVar4 + 0x38;
  *param_2 = *param_2 + (char)param_1 + (uVar1 < 0xffffffc8);
  *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

