// Function: FUN_1404ca5f8
// Addr: 1404ca5f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca5f8(char *param_1,undefined8 param_2)

{
  byte bVar1;
  uint in_EAX;
  undefined3 uVar3;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  byte bVar4;
  char cVar5;
  undefined7 uVar6;
  char unaff_R12B;
  
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  bVar4 = (byte)param_1;
  uRam000000012451a600 = uRam000000012451a600 & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  uVar3 = (undefined3)(in_EAX >> 8);
  bVar1 = (byte)in_EAX ^ bVar4;
  bVar1 = bVar1 ^ *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar3,bVar1));
  cVar5 = (char)param_2 + bVar4;
  bVar1 = (bVar1 ^ *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar3,bVar1))) + 0xa5;
  uVar2 = CONCAT31(uVar3,bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT71(uVar6,cVar5) = *(byte *)CONCAT71(uVar6,cVar5) | bVar1;
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

