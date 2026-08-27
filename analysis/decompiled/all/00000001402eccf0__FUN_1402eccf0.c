// Function: FUN_1402eccf0
// Addr: 1402eccf0
// Size: 178 bytes


/* WARNING: Removing unreachable block (ram,0x0001402ecd70) */
/* WARNING: Removing unreachable block (ram,0x0001402ecd62) */
/* WARNING: Removing unreachable block (ram,0x0001402ecd07) */

undefined8 FUN_1402eccf0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_1404e4ee0 = 0;
  DAT_1404e4ee4 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_1404e4ee0 = 1;
      DAT_1404e4ee4 = 1;
    }
    else {
      DAT_1404e4ee0 = 0;
    }
  }
  if ((DAT_1404e4ee0 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1404e4ee4 = 3;
      DAT_1404e4ee0 = 3;
      return 0;
    }
  }
  return 0;
}

