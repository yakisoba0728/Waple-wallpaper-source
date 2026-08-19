// Function: FUN_14049f3fc
// Addr: 14049f3fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f3fc(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_EAX;
  undefined3 uVar8;
  undefined4 uVar7;
  undefined4 in_register_00000004;
  uint *unaff_RBX;
  char *unaff_RSI;
  int iVar6;
  
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  bVar5 = (char)in_EAX + 0x60;
  iVar6 = CONCAT31(uVar8,bVar5);
  iVar4 = *(int *)(CONCAT44(in_register_00000004,iVar6) + 2);
  *(byte *)CONCAT44(in_register_00000004,iVar6) =
       *(byte *)CONCAT44(in_register_00000004,iVar6) ^ bVar5;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar5;
  iRam00000001524b050b = iRam00000001524b050b + iVar6 + (uint)CARRY1(bVar2,bVar5);
  cVar3 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar5;
  if (!SCARRY1(cVar3,bVar5)) {
    pbVar1 = (byte *)(CONCAT44(in_register_00000004,iVar6) + (ulonglong)(uint)(param_2 + iVar4) * 2)
    ;
    *pbVar1 = *pbVar1 ^ bVar5;
    *(byte *)CONCAT44(in_register_00000004,iVar6) =
         *(char *)CONCAT44(in_register_00000004,iVar6) + bVar5;
  }
  *unaff_RBX = *unaff_RBX & (uint)param_1;
  uVar7 = CONCAT31(uVar8,bVar5);
  *(byte *)CONCAT44(in_register_00000004,uVar7) =
       *(char *)CONCAT44(in_register_00000004,uVar7) + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

