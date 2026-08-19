// Function: FUN_1404b5ea0
// Addr: 1404b5ea0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5ea0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int *in_RAX;
  char *pcVar6;
  undefined4 *puVar7;
  byte bVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  bool in_OF;
  
  bVar8 = (byte)param_1;
  cVar4 = (char)in_RAX;
  if (!in_OF) {
    *param_4 = *param_4;
    *(char *)in_RAX = (char)*in_RAX + cVar4;
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    uVar5 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar3,bVar8);
    pcVar6 = (char *)((ulonglong)uVar5 ^ 0x1b);
    pcVar2 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 2);
    *pcVar2 = *pcVar2 + unaff_BL;
    *param_1 = *param_1 + (char)(uVar5 >> 8);
    *pcVar6 = *pcVar6 + (char)pcVar6;
    *pcVar6 = *pcVar6 + (char)((ulonglong)param_2 >> 8);
    puVar7 = (undefined4 *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)pcVar6) ^ 0x1b);
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    *param_4 = *param_4 + (((char)puVar7 - (char)*puVar7) - CARRY1(bVar3,bVar8));
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT71(unaff_00000019,unaff_BL) * 2);
  *pcVar2 = *pcVar2 + bVar8;
  *param_4 = *param_4;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  *(char *)((longlong)in_RAX + -0x5fffe4c1) = *(char *)((longlong)in_RAX + -0x5fffe4c1) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

