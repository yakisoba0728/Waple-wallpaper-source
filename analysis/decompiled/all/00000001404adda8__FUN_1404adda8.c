// Function: FUN_1404adda8
// Addr: 1404adda8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1404adda8(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  int unaff_EBX;
  uint uVar3;
  
  bVar2 = (byte)in_EAX;
  cVar1 = bVar2 + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,cVar1);
  if (!SCARRY1(bVar2,*(char *)CONCAT44(in_register_00000004,in_EAX))) {
    *param_4 = *param_4 + cVar1;
    *(uint *)CONCAT44(in_register_00000004,uVar3) =
         *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
    *(int *)CONCAT44(in_register_00000004,uVar3) =
         *(int *)CONCAT44(in_register_00000004,uVar3) + unaff_EBX;
    *param_2 = *param_2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(int *)CONCAT44(in_register_00000004,uVar3) + uVar3 +
       (uint)CARRY1(bVar2,*(byte *)CONCAT44(in_register_00000004,in_EAX));
  return CONCAT31(uVar4,cVar1 + *(char *)CONCAT44(in_register_00000004,uVar3));
}

