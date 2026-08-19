// Function: FUN_1404b50c4
// Addr: 1404b50c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b50c4(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined4 in_register_00000004;
  char in_CF;
  uint uVar4;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = ('M' - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,0x4d))) - in_CF;
  bVar3 = (cVar2 - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2))) - 1;
  uVar4 = CONCAT31(uVar5,bVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar4) =
       *(uint *)CONCAT44(in_register_00000004,uVar4) & uVar4;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,uVar4);
  *(byte *)CONCAT44(in_register_00000004,uVar4) =
       *(char *)CONCAT44(in_register_00000004,uVar4) + bVar3;
  cVar2 = ('M' - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,0x4d))) - CARRY1(bVar1,bVar3)
  ;
  uRam00000001b45050e8 =
       uRam00000001b45050e8 &
       CONCAT31(uVar5,(cVar2 - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2))) + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

