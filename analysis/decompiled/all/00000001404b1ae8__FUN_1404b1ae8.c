// Function: FUN_1404b1ae8
// Addr: 1404b1ae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1ae8(char *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 in_RAX;
  byte bVar5;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  *param_2 = 0;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)in_RAX;
  iVar2 = *(int *)CONCAT44(unaff_00000034,unaff_ESI);
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar4,unaff_BL);
  *(int *)(unaff_RBP + 0xd) = *(int *)(unaff_RBP + 0xd) + unaff_ESI;
  bVar5 = (byte)((uint)((int)param_2 - iVar2) >> 8);
  *(char *)(unaff_RBP + -0x1c) = *(char *)(unaff_RBP + -0x1c) + bVar5;
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4 + unaff_BL,(char)in_RAX)) +
          0xd43b9300;
  *(char *)(unaff_RBP + 0x34) = *(char *)(unaff_RBP + 0x34) + (char)(uVar3 >> 8);
  *param_1 = (*param_1 - ((byte)uVar3 - *(byte *)(ulonglong)uVar3)) -
             ((byte)uVar3 < *(byte *)(ulonglong)uVar3);
  pbVar1 = (byte *)(CONCAT71((uint7)(uint3)(uVar3 >> 8),0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

