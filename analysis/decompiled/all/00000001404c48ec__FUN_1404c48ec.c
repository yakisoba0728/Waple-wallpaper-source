// Function: FUN_1404c48ec
// Addr: 1404c48ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c48ec(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar6;
  undefined4 uVar5;
  undefined4 in_register_00000004;
  byte bVar7;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  uint uVar4;
  
  bVar7 = (byte)param_2;
  *(undefined1 *)CONCAT44(in_register_00000004,in_EAX) =
       *(undefined1 *)CONCAT44(in_register_00000004,in_EAX);
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar7;
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = (char)in_EAX + '\x06' + CARRY1(bVar2,bVar7);
  uVar4 = CONCAT31(uVar6,cVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar4) =
       *(uint *)CONCAT44(in_register_00000004,uVar4) | uVar4;
  bVar2 = cVar3 + 0x34;
  *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar6,bVar2)) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar6,bVar2)) | bVar2;
  cVar3 = cVar3 + -0x7a;
  uVar5 = CONCAT31(uVar6,cVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + 0x60);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0xad < bVar2);
  *param_1 = *param_1 + cVar3;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x2b,unaff_BL)) + 0x36);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
  *(char *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + cVar3;
  *param_1 = *param_1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

