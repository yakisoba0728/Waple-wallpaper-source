// Function: tls_callback_0
// Addr: 14028aeb0
// Size: 102 bytes


/* WARNING: Removing unreachable block (ram,0x00014028aef4) */
/* WARNING: Removing unreachable block (ram,0x00014028aefc) */
/* WARNING: Removing unreachable block (ram,0x00014028af02) */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x10) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
  }
  return;
}

