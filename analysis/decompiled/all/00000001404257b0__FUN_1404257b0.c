// Function: FUN_1404257b0
// Addr: 1404257b0
// Size: 67 bytes


/* WARNING: Switch with 1 destination removed at 0x0001404257e7 */

void FUN_1404257b0(void)

{
  undefined8 *puVar1;
  
  if ((DAT_1404e3cc8 != 0) &&
     (puVar1 = (undefined8 *)(*(code *)PTR__guard_dispatch_icall_140426ae8)(),
     puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140420d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

