// Function: FUN_1404c8148
// Addr: 1404c8148
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8148(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  char cVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
  puVar1 = (undefined1 *)
           (CONCAT71(in_register_00000001,in_AL) + 0x21 + CONCAT71(in_register_00000001,in_AL));
  *puVar1 = *puVar1;
  cVar3 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  if (!SCARRY1(cVar3,in_AL)) {
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
    pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x19 +
                     CONCAT71(in_register_00000001,in_AL));
    *pbVar2 = *pbVar2 | 0x25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

