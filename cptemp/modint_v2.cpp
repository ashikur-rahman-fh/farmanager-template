t e m p l a t e   < t y p e n a m e   T >  
 T   i n v e r s e ( T   a ,   T   m )   {  
     T   u   =   0 ,   v   =   1 ;  
     w h i l e   ( a   ! =   0 )   {  
         T   t   =   m   /   a ;  
         m   - =   t   *   a ;   s w a p ( a ,   m ) ;  
         u   - =   t   *   v ;   s w a p ( u ,   v ) ;  
     }  
     a s s e r t ( m   = =   1 ) ;  
     r e t u r n   u ;  
 }  
  
 c l a s s   m o d u l a r   {  
 p u b l i c :  
     m o d u l a r ( )   :   k e y ( 0 )   {   }  
     t e m p l a t e < t y p e n a m e   T >  
     m o d u l a r ( c o n s t   T   & v )   {   k e y   =   n o r m a l i z e ( v ) ;   }  
     t e m p l a t e   < t y p e n a m e   T >  
     s t a t i c   i n l i n e   i n t   n o r m a l i z e ( c o n s t   T &   x )   {  
         i n t   v ;  
         i f   ( - m o d   < =   x   & &   x   <   m o d )   {   v   =   ( i n t )   x ;   }  
         e l s e   {   v   =   ( i n t )   ( x   %   m o d ) ;   }  
         i f   ( v   <   0 )   {   v   + =   m o d ;   }  
         r e t u r n   v ;  
     }  
     m o d u l a r   & o p e r a t o r   + =   ( c o n s t   m o d u l a r   & r h s )   {   i f   ( ( k e y   + =   r h s . k e y )   > =   m o d )   {   k e y   - =   m o d ;   }   r e t u r n   * t h i s ;   }  
     m o d u l a r   & o p e r a t o r   - =   ( c o n s t   m o d u l a r   & r h s )   {   i f   ( ( k e y   - =   r h s . k e y )   <   0 )   {   k e y   + =   m o d ;   }   r e t u r n   * t h i s ;   }  
     m o d u l a r   & o p e r a t o r   * =   ( c o n s t   m o d u l a r   & r h s )   {   c o n s t   l o n g   l o n g   v   =   s t a t i c _ c a s t < l o n g   l o n g >   ( k e y )   *   r h s . k e y ;   k e y   =   n o r m a l i z e ( v ) ;   r e t u r n   * t h i s ;   }  
     m o d u l a r   & o p e r a t o r   / =   ( c o n s t   m o d u l a r   & r h s )   {   r e t u r n   * t h i s   * =   i n v e r s e ( r h s . k e y ,   m o d ) ;   }  
     m o d u l a r   & o p e r a t o r   + + ( )   {   r e t u r n   * t h i s   + =   1 ;   }  
     m o d u l a r   & o p e r a t o r   - - ( )   {   r e t u r n   * t h i s   - =   1 ;   }  
     m o d u l a r   o p e r a t o r   + + ( i n t )   {   m o d u l a r   & r e t   =   * t h i s ;   r e t   + =   1 ;   r e t u r n   r e t ;   }  
     m o d u l a r   o p e r a t o r   - - ( i n t )   {   m o d u l a r   & r e t   =   * t h i s ;   r e t   - =   1 ;   r e t u r n   r e t ;   }  
     b o o l   o p e r a t o r   = =   ( c o n s t   m o d u l a r   & r h s )   {   r e t u r n   k e y   = =   r h s . k e y ;   } ;  
     b o o l   o p e r a t o r   ! =   ( c o n s t   m o d u l a r   & r h s )   {   r e t u r n   k e y   ! =   r h s . k e y ;   } ;  
 p u b l i c :  
     s t a t i c   i n t   m o d ;  
     i n t   k e y ;  
 } ;  
  
 b o o l   o p e r a t o r   = =   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s . k e y   = =   r h s . k e y ;   }  
 b o o l   o p e r a t o r   ! =   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s . k e y   ! =   r h s . k e y ;   }  
  
 m o d u l a r   o p e r a t o r   +   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   m o d u l a r   t m p   =   l h s ;   r e t u r n   t m p   + =   r h s ;   }  
 m o d u l a r   o p e r a t o r   -   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   m o d u l a r   t m p   =   l h s ;   r e t u r n   t m p   - =   r h s ;   }  
 m o d u l a r   o p e r a t o r   *   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   m o d u l a r   t m p   =   l h s ;   r e t u r n   t m p   * =   r h s ;   }  
 m o d u l a r   o p e r a t o r   /   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   m o d u l a r   t m p   =   l h s ;   r e t u r n   t m p   / =   r h s ;   }  
  
 o s t r e a m   &   o p e r a t o r   < <   ( o s t r e a m   & o u t ,   m o d u l a r   n u m )   {  
     n u m . k e y   =   m o d u l a r : : n o r m a l i z e ( n u m . k e y ) ;  
     o u t   < <   n u m . k e y ;  
     r e t u r n   o u t ;  
 }  
 i s t r e a m   &   o p e r a t o r   > >   ( i s t r e a m   & i n ,   m o d u l a r   & n u m )   {    
     i n t   t m p ;  
     i n   > >   t m p ;  
     n u m . k e y   =   m o d u l a r : : n o r m a l i z e ( t m p ) ;  
     r e t u r n   i n ;  
 }  
  
 i n t   m o d u l a r : : m o d   =   ;  
 u s i n g   m i n t   =   m o d u l a r ;  
  
 v e c t o r < m i n t >   f a c ( 1 ,   1 ) ;  
 v e c t o r < m i n t >   i n v _ f a c ( 1 ,   1 ) ;  
  
 m i n t   C ( i n t   n ,   i n t   k )   {  
     i f   ( k   <   0   | |   k   >   n )   {  
         r e t u r n   0 ;  
     }  
     w h i l e   ( ( i n t )   f a c . s i z e ( )   <   n   +   1 )   {  
         f a c . p u s h _ b a c k ( f a c . b a c k ( )   *   ( i n t )   f a c . s i z e ( ) ) ;  
         i n v _ f a c . p u s h _ b a c k ( 1   /   f a c . b a c k ( ) ) ;  
     }  
     r e t u r n   f a c [ n ]   *   i n v _ f a c [ k ]   *   i n v _ f a c [ n   -   k ] ;  
 }  
  
 t e m p l a t e < t y p e n a m e   T ,   t y p e n a m e   U >  
 m o d u l a r   p o w e r ( c o n s t   T   & a ,   c o n s t   U   b )   {  
     a s s e r t ( b   > =   0 ) ;  
     m i n t   x   =   a ,   r e s   =   1 ;  
     U   p   =   b ;  
     w h i l e   ( p   >   0 )   {  
         i f   ( p   &   1 )   r e s   * =   x ;  
         x   * =   x ;  
         p   > > =   1 ;  
     }  
     r e t u r n   r e s ;  
 } 