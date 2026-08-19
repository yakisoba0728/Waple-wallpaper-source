// Function: FUN_1404bc6e0
// Addr: 1404bc6e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc6e0(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined7 uVar4;
  char cVar5;
  byte bVar6;
  undefined6 uVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *pbVar3;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  while( true ) {
    uVar4 = (undefined7)(in_RAX >> 8);
    bVar1 = (char)in_RAX + 100;
    pbVar3 = (byte *)CONCAT71(uVar4,bVar1);
    *(int *)pbVar3 = *(int *)pbVar3 - (int)pbVar3;
    param_1 = param_1 + -1;
    if (param_1 == 0 || *(int *)pbVar3 == 0) break;
    puVar8 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar8 = 0xfffffffff42d0011;
    uVar2 = (int)pbVar3 - *(int *)pbVar3;
    pbVar3 = (byte *)(ulonglong)uVar2;
    *(int *)(pbVar3 + unaff_RBP) = *(int *)(pbVar3 + unaff_RBP) - unaff_ESI;
    pbVar3[CONCAT71(unaff_00000019,unaff_BL) * 8] =
         pbVar3[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),((byte)uVar2 | *pbVar3) + (char)param_1);
    in_RAX = (ulonglong)(uVar2 | *(uint *)(ulonglong)uVar2);
    *(byte *)(param_2 + unaff_RBP) = *(byte *)(param_2 + unaff_RBP) | bVar6;
  }
  bVar1 = bVar1 & *pbVar3;
  uVar9 = (ulonglong)(uint)((int)register0x00000020 * 2);
  bVar1 = bVar1 & *(byte *)CONCAT71(uVar4,bVar1);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + (char)((int)register0x00000020 * 2);
  *(char *)CONCAT71(uVar4,bVar1) = *(char *)CONCAT71(uVar4,bVar1) + bVar1;
  bVar1 = bVar1 + (char)(in_RAX >> 8);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar5 << 1 | cVar5 < '\0',(char)param_1))
      != 0) {
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar1;
    in(0x22);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 == 0) {
    *(char *)(unaff_RBP + 0x78) = *(char *)(unaff_RBP + 0x78) + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(uVar9 - 8) = 0xffffffffebe00007;
  bVar1 = bVar1 & *(byte *)CONCAT71(uVar4,bVar1);
  bVar1 = bVar1 & *(byte *)CONCAT71(uVar4,bVar1);
  pbVar3 = (byte *)CONCAT71(uVar4,bVar1);
  *param_4 = *param_4 + (char)(uVar9 - 8);
  *(byte *)CONCAT62(uVar7,CONCAT11(bVar6 ^ bVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6 ^ bVar1,(char)param_2)) + bVar1;
  *pbVar3 = *pbVar3 + bVar1;
  *(undefined8 *)(uVar9 - 0x10) = 0xffffffffebe00007;
  bVar1 = bVar1 & *pbVar3 & *(byte *)CONCAT71(uVar4,bVar1 & *pbVar3);
  bVar6 = *param_4;
  *param_4 = *param_4 + bVar1;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) +
       bVar1 + (char)*(undefined4 *)(CONCAT71(uVar4,bVar1) * 2) + CARRY1(bVar6,bVar1);
  *(ulonglong *)(uVar9 - 0x18) = CONCAT44(unaff_00000034,unaff_ESI);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

