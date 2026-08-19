// Function: FUN_1404aef30
// Addr: 1404aef30
// Size: 1 bytes


void FUN_1404aef30(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *in_RAX;
  byte bVar8;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  uint unaff_EBP;
  char *unaff_RSI;
  uint *puVar7;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar6 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar3 = (uint)CARRY1((byte)uVar6,(byte)in_RAX);
  uVar6 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = uVar6 + uVar3;
  iVar5 = unaff_EBP + *(int *)(ulonglong)unaff_EBP + (uint)CARRY4(uVar6,uVar3);
  cVar4 = (char)iVar5 + -0x12;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),cVar4);
  puVar7 = (uint *)(ulonglong)uVar6;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar7 = (char)*puVar7 + cVar4;
  pbVar1 = (byte *)((longlong)puVar7 + -0x7d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) +
       (uint)(CARRY4(uVar6,*puVar7) || CARRY4(uVar6 + *puVar7,(uint)CARRY1(bVar2,bVar8)));
  uVar6 = in(0x49);
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

