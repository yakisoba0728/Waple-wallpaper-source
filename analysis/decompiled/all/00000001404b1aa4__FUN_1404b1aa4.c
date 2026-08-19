// Function: FUN_1404b1aa4
// Addr: 1404b1aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1aa4(char *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint *puVar5;
  byte bVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  bool in_CF;
  bool in_SF;
  byte abStack_8 [8];
  byte bVar6;
  undefined6 uVar7;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)in_RAX;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  if (!in_SF) {
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar8;
    abStack_8[0] = 0x15;
    abStack_8[1] = 0;
    abStack_8[2] = 0x17;
    abStack_8[3] = 0xc4;
    abStack_8[4] = 0xff;
    abStack_8[5] = 0xff;
    abStack_8[6] = 0xff;
    abStack_8[7] = 0xff;
    abStack_8[CONCAT44(unaff_00000034,unaff_ESI)] =
         abStack_8[CONCAT44(unaff_00000034,unaff_ESI)] | (byte)((ulonglong)param_2 >> 8);
    *param_2 = 0;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
    param_2 = (undefined1 *)
              (ulonglong)(uint)((int)param_2 - *(int *)CONCAT44(unaff_00000034,unaff_ESI));
  }
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar6 = bVar8 + unaff_BL;
  puVar5 = (uint *)CONCAT62(uVar7,CONCAT11(bVar6,cVar3));
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar8,unaff_BL);
  *puVar5 = *puVar5 & (uint)puVar5;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *param_2 = 0;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
  iVar2 = *(int *)CONCAT44(unaff_00000034,unaff_ESI);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar6,unaff_BL);
  *(int *)(unaff_RBP + 0xd) = *(int *)(unaff_RBP + 0xd) + unaff_ESI;
  bVar8 = (byte)((uint)((int)param_2 - iVar2) >> 8);
  *(char *)(unaff_RBP + -0x1c) = *(char *)(unaff_RBP + -0x1c) + bVar8;
  uVar4 = (int)CONCAT62(uVar7,CONCAT11(bVar6 + unaff_BL,cVar3)) + 0xd43b9300;
  *(char *)(unaff_RBP + 0x34) = *(char *)(unaff_RBP + 0x34) + (char)(uVar4 >> 8);
  *param_1 = (*param_1 - ((byte)uVar4 - *(byte *)(ulonglong)uVar4)) -
             ((byte)uVar4 < *(byte *)(ulonglong)uVar4);
  pbVar1 = (byte *)(CONCAT71((uint7)(uint3)(uVar4 >> 8),0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

