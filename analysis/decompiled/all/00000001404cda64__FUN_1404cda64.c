// Function: FUN_1404cda64
// Addr: 1404cda64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cda64(undefined8 param_1,byte *param_2,longlong param_3)

{
  undefined1 *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_DIL;
  byte bVar2;
  undefined7 unaff_00000039;
  
  bVar2 = unaff_DIL ^ *(byte *)(param_3 + CONCAT44(in_register_00000004,in_EAX));
  puVar1 = (undefined1 *)(CONCAT71(unaff_00000039,bVar2) + 0x4a);
  *puVar1 = *puVar1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_2 = *param_2 & (byte)((ulonglong)param_2 >> 8);
  puVar1 = (undefined1 *)
           (CONCAT71(unaff_00000039,
                     bVar2 ^ *(byte *)(param_3 + CONCAT44(in_register_00000004,in_EAX))) + 0x4a);
  *puVar1 = *puVar1;
  uRam000000019451da84 = uRam000000019451da84 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

