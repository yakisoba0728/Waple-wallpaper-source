// Function: FUN_1404ac370
// Addr: 1404ac370
// Size: 1 bytes


uint FUN_1404ac370(undefined8 param_1,char param_2)

{
  uint in_EAX;
  longlong unaff_RDI;
  
  uRam00000001744fc378 = uRam00000001744fc378 & in_EAX;
  *(char *)(unaff_RDI + -0x6ffff014) = *(char *)(unaff_RDI + -0x6ffff014) + param_2;
  return in_EAX | 0xfec6000;
}

