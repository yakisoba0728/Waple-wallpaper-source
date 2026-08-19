// Function: FUN_1404a7b30
// Addr: 1404a7b30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7b30(char *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BH;
  char cVar2;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar3 = (byte)in_EAX;
  cVar2 = *(char *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  if (SCARRY1(cVar2,bVar3)) {
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)CARRY1(bVar1,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = bVar3 | *(byte *)CONCAT44(in_register_00000004,in_EAX);
  if (bVar3 != 0) {
    bVar1 = *(byte *)CONCAT44(in_register_00000004,CONCAT31((int3)(in_EAX >> 8),bVar3));
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
    *param_1 = *param_1 + (bVar3 | bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

