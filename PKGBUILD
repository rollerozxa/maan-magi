# Maintainer: ROllerozxa <temporaryemail4meh [gee mail]>
pkgname=maan-magi
pkgver=1.0
pkgrel=1
pkgdesc="Small program to enable Lunar Magic running under Wine to work with the Linux version of Snes9x."
arch=(x86_64)
url="https://github.com/rollerozxa/maan-magi"
license=('MIT')
depends=('snes9x-gtk')
makedepends=('cmake' 'ninja')
optdepends=('lunar-magic')

build() {
	cmake -DCMAKE_BUILD_TYPE=Release -G Ninja ../
	ninja
}

package() {
	install -D -m755 "${srcdir}/MaanMagi" "${pkgdir}/usr/bin/MaanMagi"
}
