// Function: FUN_1404c7508
// Addr: 1404c7508
// Size: 1 bytes


uint FUN_1404c7508(void)

{
  undefined8 in_RAX;
  uint *puVar1;
  char cVar2;
  
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  puVar1 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(cVar2 << 1 | cVar2 < '\0',(char)in_RAX));
  return (uint)puVar1 | *puVar1;
}

