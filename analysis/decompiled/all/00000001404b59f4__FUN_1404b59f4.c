// Function: FUN_1404b59f4
// Addr: 1404b59f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b59f4(undefined8 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  int *unaff_RDI;
  byte in_CF;
  bool bVar5;
  uint uVar3;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = -*(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,0xc3)) - 0x3d;
  cVar1 = bVar2 - in_CF;
  bVar2 = (cVar1 - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cVar1))) -
          (0xc3 < *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar4,0xc3)) || bVar2 < in_CF);
  uVar3 = CONCAT31(uVar4,bVar2);
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = *(undefined1 *)((longlong)unaff_RDI + 0x4a);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) & uVar3;
  bVar5 = CARRY1(*(byte *)CONCAT44(in_register_00000004,uVar3),bVar2);
  *(byte *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + bVar2;
  bVar2 = -*(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,0xc3)) - 0x3d;
  cVar1 = bVar2 - bVar5;
  uVar3 = CONCAT31(uVar4,(cVar1 - *(char *)CONCAT44(in_register_00000004,CONCAT31(uVar4,cVar1))) -
                         (0xc3 < *(byte *)CONCAT44(in_register_00000004,CONCAT31(uVar4,0xc3)) ||
                         bVar2 < bVar5));
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = *(undefined1 *)((longlong)unaff_RDI + 0x4a);
  *unaff_RDI = *unaff_RDI + param_2;
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

