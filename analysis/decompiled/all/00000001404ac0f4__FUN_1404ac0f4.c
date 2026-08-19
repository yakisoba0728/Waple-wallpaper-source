// Function: FUN_1404ac0f4
// Addr: 1404ac0f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac0f4(char *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte in_AL;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_SPL;
  
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)in_AL)) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)in_AL)) | in_AL;
  bVar3 = in_AL & 0x74;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) + bVar3;
  cRam000000018b4acf59 = cRam000000018b4acf59 + bVar3;
  verw();
  uVar1 = TaskRegister();
  *(undefined2 *)
   (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) +
   CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) * 8) = uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) + bVar3;
  *(char *)(unaff_RBX + -0x51) = *(char *)(unaff_RBX + -0x51) + (char)param_1;
  verw();
  uVar1 = TaskRegister();
  *(undefined2 *)
   (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) +
   CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) * 8) = uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) + bVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) +
       (char)param_2;
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RBX + -0x51) = uVar1;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) = uVar2
  ;
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *param_2 = *param_2 + bVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)bVar3)) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

