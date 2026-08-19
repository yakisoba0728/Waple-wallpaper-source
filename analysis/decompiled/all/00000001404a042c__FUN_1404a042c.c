// Function: FUN_1404a042c
// Addr: 1404a042c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a042c(char *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar6;
  longlong in_RAX;
  undefined6 uVar7;
  byte *pbVar3;
  int *piVar4;
  char cVar8;
  byte *unaff_RBX;
  char unaff_SPL;
  uint *puVar5;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar1 = (byte)in_RAX;
  *unaff_RBX = *unaff_RBX | bVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + bVar1;
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar6 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  puVar5 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar1));
  *puVar5 = *puVar5 | (uint)puVar5;
  pbVar3 = (byte *)CONCAT62(uVar7,CONCAT11(cVar6 + bVar1,bVar1));
  piVar4 = (int *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),bVar1 | *pbVar3);
  *unaff_RBX = *unaff_RBX >> 3;
  param_2[0x2c] = param_2[0x2c] + cVar8;
  uVar2 = (int)piVar4 + *piVar4;
  puVar5 = (uint *)(ulonglong)uVar2;
  cVar6 = *param_2;
  *puVar5 = *puVar5 & uVar2;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar2;
  *unaff_RBX = *unaff_RBX >> 3;
  param_2[0x2c] = param_2[0x2c] + cVar8;
  iRam00000000d2570464 =
       iRam00000000d2570464 +
       CONCAT31((int3)((ulonglong)param_1 >> 8),(char)param_1 + cVar6 + *param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

