// Function: FUN_14049e9b4
// Addr: 14049e9b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e9b4(byte *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar3;
  undefined7 uVar4;
  char cVar5;
  undefined6 uVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar1;
  bVar2 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH << 1,unaff_BL)) + (ulonglong)bVar1);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  cVar3 = (char)param_1 +
          *(char *)CONCAT44(in_register_00000004,CONCAT31((int3)(in_EAX >> 8),bVar2)) +
          CARRY1(bVar1,bVar2);
  *param_2 = *param_2 + cVar5;
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(CONCAT71(uVar4,cVar3) + CONCAT71(uVar4,cVar3))
  ;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar3,cVar5)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar3,cVar5)) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

